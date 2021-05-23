/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, USKObjectPath, USKToken;

@interface USKObject : NSObject

{
    USKToken *_name;
    USKObjectPath *_path;
}

@property (retain, nonatomic, readonly) USKToken *name;
@property (retain, nonatomic, readonly) USKObjectPath *path;
@property (nonatomic, readonly) NSDictionary *metadata;

@end
