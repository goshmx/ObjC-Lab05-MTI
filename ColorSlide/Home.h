//
//  ViewController.h
//  ColorSlide
//
//  Created by TRON on 19/01/15.
//  Copyright (c) 2015 TRON. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Home : UIViewController

//Label
@property (strong, nonatomic) IBOutlet UILabel *Color;
@property (strong, nonatomic) IBOutlet UILabel *lblRojo;
@property (strong, nonatomic) IBOutlet UILabel *lblVerde;
@property (strong, nonatomic) IBOutlet UILabel *lvlAzul;


//Sliders
@property (strong, nonatomic) IBOutlet UISlider *sliderRojo;
@property (strong, nonatomic) IBOutlet UISlider *sliderVerde;
@property (strong, nonatomic) IBOutlet UISlider *sliderAzul;
@property (strong, nonatomic) IBOutlet UISlider *sliderAlpha;


//Acciones
- (IBAction)accionRojo:(id)sender;
- (IBAction)accionVerde:(id)sender;
- (IBAction)accionAzul:(id)sender;
- (IBAction)accionAlpha:(id)sender;


@end

