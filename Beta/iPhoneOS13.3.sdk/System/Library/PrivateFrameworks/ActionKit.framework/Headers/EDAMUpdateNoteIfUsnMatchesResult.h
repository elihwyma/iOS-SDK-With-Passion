/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNote, NSNumber;

@interface EDAMUpdateNoteIfUsnMatchesResult : FATObject

{
    EDAMNote *_note;
    NSNumber *_updated;
}

@property (retain, nonatomic) EDAMNote *note;
@property (retain, nonatomic) NSNumber *updated;

+ (id)structName;
+ (id)structFields;

@end
