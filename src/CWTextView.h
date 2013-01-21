//
//  CWTextView.m
//  CommitWindow
//
//  Created by Chris Thomas on 3/7/05.
//  Copyright 2005-2006 Chris Thomas. All rights reserved.
//  MIT license.
//

#import <Cocoa/Cocoa.h>


@interface CWTextView : NSTextView
{
	CGFloat	fMinHeight;
	CGFloat	fMaxHeight;
	CGFloat	fMinWidth;
	CGFloat	fMaxWidth;
	
	NSRect	fInitialViewFrame;
	NSPoint	fInitialMousePoint;
	BOOL	fTrackingGrowBox;

	BOOL	fAllowGrowHorizontally;
	BOOL	fAllowGrowVertically;
}

- (BOOL)allowHorizontalResize;
- (void)setAllowHorizontalResize:(BOOL)newAllowGrowHorizontally;

- (BOOL)allowVerticalResize;
- (void)setAllowVerticalResize:(BOOL)newAllowGrowVertically;

- (CGFloat)maxWidth;
- (void)setMaxWidth:(CGFloat)newMaxWidth;

- (CGFloat)minWidth;
- (void)setMinWidth:(CGFloat)newMinWidth;

- (CGFloat)minHeight;
- (void)setMinHeight:(CGFloat)newMinHeight;

- (CGFloat)maxHeight;
- (void)setMaxHeight:(CGFloat)newMaxHeight;

@end
