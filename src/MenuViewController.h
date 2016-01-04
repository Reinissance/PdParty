/*
 * Copyright (c) 2015 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/danomatika/PdParty for documentation
 *
 */
#import <UIKit/UIKit.h>

/// grid of menu buttons, some generated from MenuBang objects
@interface MenuViewController : UICollectionViewController

@property (assign, nonatomic) int cellSize; //< width & height for a single cell

@property (readonly, nonatomic) int height; //< row height including padding

/// use a light background?
@property (assign, nonatomic) BOOL lightBackground;

/// the current background color
@property (readonly, nonatomic) UIColor *backgroundColor;

#pragma Layout

/// align edges to superview
- (void)alignToSuperview;

/// align edges to superview sides & bottom
- (void)alignToSuperviewBottom;

/// align edges to superview sides & top
- (void)alignToSuperviewTop;

@end
