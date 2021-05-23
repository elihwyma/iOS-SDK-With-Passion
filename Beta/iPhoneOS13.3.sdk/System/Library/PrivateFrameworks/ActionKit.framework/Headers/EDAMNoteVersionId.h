/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNoteVersionId : FATObject

{
    NSNumber *_updateSequenceNum;
    NSNumber *_updated;
    NSNumber *_saved;
    NSString *_title;
    NSNumber *_lastEditorId;
}

@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *saved;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *lastEditorId;

+ (id)structName;
+ (id)structFields;

@end
