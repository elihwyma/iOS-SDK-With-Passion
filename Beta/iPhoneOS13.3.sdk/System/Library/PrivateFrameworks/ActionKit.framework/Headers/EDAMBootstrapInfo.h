/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray;

@interface EDAMBootstrapInfo : FATObject

{
    NSArray *_profiles;
}

@property (retain, nonatomic) NSArray *profiles;

+ (id)structName;
+ (id)structFields;

@end
