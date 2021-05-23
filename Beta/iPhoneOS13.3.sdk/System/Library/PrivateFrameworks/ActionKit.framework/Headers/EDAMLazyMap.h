/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSDictionary, NSSet;

@interface EDAMLazyMap : FATObject

{
    NSSet *_keysOnly;
    NSDictionary *_fullMap;
}

@property (retain, nonatomic) NSSet *keysOnly;
@property (retain, nonatomic) NSDictionary *fullMap;

+ (id)structName;
+ (id)structFields;

@end
