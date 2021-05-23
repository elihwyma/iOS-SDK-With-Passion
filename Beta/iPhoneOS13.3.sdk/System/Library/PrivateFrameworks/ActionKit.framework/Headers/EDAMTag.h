/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMTag : FATObject

{
    NSString *_guid;
    NSString *_name;
    NSString *_parentGuid;
    NSNumber *_updateSequenceNum;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *parentGuid;
@property (retain, nonatomic) NSNumber *updateSequenceNum;

+ (id)structName;
+ (id)structFields;

@end
