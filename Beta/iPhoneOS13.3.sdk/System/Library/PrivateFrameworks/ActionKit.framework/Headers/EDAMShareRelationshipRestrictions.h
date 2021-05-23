/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMShareRelationshipRestrictions : FATObject

{
    NSNumber *_noSetReadOnly;
    NSNumber *_noSetReadPlusActivity;
    NSNumber *_noSetModify;
    NSNumber *_noSetFullAccess;
}

@property (retain, nonatomic) NSNumber *noSetReadOnly;
@property (retain, nonatomic) NSNumber *noSetReadPlusActivity;
@property (retain, nonatomic) NSNumber *noSetModify;
@property (retain, nonatomic) NSNumber *noSetFullAccess;

+ (id)structName;
+ (id)structFields;

@end
