//
//  t_ModelController.h
//  Test
//
//  Created by Markus on 15.08.12.
//  Copyright (c) 2012 Markus. All rights reserved.
//

#import <UIKit/UIKit.h>

@class t_DataViewController;

@interface t_ModelController : NSObject <UIPageViewControllerDataSource>

- (t_DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(t_DataViewController *)viewController;

@end
