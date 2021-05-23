/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteShareRelationshipRestrictions : FATObject

{
    NSNumber *_noSetReadNote;
    NSNumber *_noSetModifyNote;
    NSNumber *_noSetFullAccess;
}

@property (retain, nonatomic) NSNumber *noSetReadNote;
@property (retain, nonatomic) NSNumber *noSetModifyNote;
@property (retain, nonatomic) NSNumber *noSetFullAccess;

+ (id)structName;
+ (id)structFields;

@end
