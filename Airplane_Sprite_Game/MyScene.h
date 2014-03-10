//
//  MyScene.h
//  Airplane_Sprite_Game
//

//  Copyright (c) 2014 Reuben. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface MyScene : SKScene{
    CGRect screenRect;
    CGFloat screenHeight;
    CGFloat screenWidth;
}

@property SKSpriteNode *plane;

@end
