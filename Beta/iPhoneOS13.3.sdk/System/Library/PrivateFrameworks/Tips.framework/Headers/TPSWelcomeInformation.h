/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TPSWelcomeInformation : NSObject

{
    NSString *_title;
    NSString *_message;
    NSString *_collectionID;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *collectionID;

@end
