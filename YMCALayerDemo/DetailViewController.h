//
//  DetailViewController.h
//  YMCALayerDemo
//
//  Created by long on 3/28/16.
//  Copyright © 2016 long. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

