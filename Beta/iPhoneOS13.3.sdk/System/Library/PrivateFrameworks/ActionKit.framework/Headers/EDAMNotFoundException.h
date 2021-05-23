/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATException.h>

@class NSString;

@interface EDAMNotFoundException : FATException

{
    NSString *_identifier;
    NSString *_key;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *key;

+ (id)structName;
+ (id)structFields;

@end
