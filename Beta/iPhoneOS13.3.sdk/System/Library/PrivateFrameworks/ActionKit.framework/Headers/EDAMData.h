/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSData, NSNumber;

@interface EDAMData : FATObject

{
    NSData *_bodyHash;
    NSNumber *_size;
    NSData *_body;
}

@property (retain, nonatomic) NSData *bodyHash;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSData *body;

+ (id)structName;
+ (id)structFields;

@end
