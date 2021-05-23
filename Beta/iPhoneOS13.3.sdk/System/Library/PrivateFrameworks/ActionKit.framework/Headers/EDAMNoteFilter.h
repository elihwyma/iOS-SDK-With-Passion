/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber, NSString;

@interface EDAMNoteFilter : FATObject

{
    NSNumber *_order;
    NSNumber *_ascending;
    NSString *_words;
    NSString *_notebookGuid;
    NSArray *_tagGuids;
    NSString *_timeZone;
    NSNumber *_inactive;
    NSString *_emphasized;
    NSNumber *_includeAllReadableNotebooks;
    NSString *_context;
}

@property (retain, nonatomic) NSNumber *order;
@property (retain, nonatomic) NSNumber *ascending;
@property (retain, nonatomic) NSString *words;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSArray *tagGuids;
@property (retain, nonatomic) NSString *timeZone;
@property (retain, nonatomic) NSNumber *inactive;
@property (retain, nonatomic) NSString *emphasized;
@property (retain, nonatomic) NSNumber *includeAllReadableNotebooks;
@property (retain, nonatomic) NSString *context;

+ (id)structName;
+ (id)structFields;

@end
