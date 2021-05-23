/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AADevice : NSObject

{
    NSString *_model;
    NSString *_name;
    NSString *_osVersion;
    NSString *_swVersion;
    NSString *_modelSmallPhotoURL3x;
    NSString *_modelSmallPhotoURL2x;
    NSString *_modelSmallPhotoURL1x;
    NSString *_modelLargePhotoURL3x;
    NSString *_modelLargePhotoURL2x;
    NSString *_modelLargePhotoURL1x;
    NSString *_modelDisplayName;
}

@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *swVersion;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL3x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL2x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL1x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL3x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL2x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL1x;
@property (nonatomic, readonly) NSString *modelDisplayName;

- (id)initWithDictionary:(id)arg1;

@end
