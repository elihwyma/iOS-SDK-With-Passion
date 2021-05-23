/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@protocol NTKCompanionAppDelegate;

@interface NTKCompanionApp : NSObject

{
    _Bool _fetchingIcon;
    NSString *_name;
    NSString *_watchApplicationIdentifier;
    NSString *_containerApplicationIdentifier;
    id <NTKCompanionAppDelegate> _delegate;
    UIImage *_icon;
}

@property (nonatomic) _Bool fetchingIcon;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *watchApplicationIdentifier;
@property (retain, nonatomic) NSString *containerApplicationIdentifier;
@property (weak, nonatomic) id <NTKCompanionAppDelegate> delegate;

- (id)complication;

@end
