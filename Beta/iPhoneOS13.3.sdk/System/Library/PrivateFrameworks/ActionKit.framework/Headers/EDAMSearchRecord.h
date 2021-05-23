/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSNumber, NSString;

@interface EDAMSearchRecord : FATObject

{
    NSString *_userQuery;
    EDAMNoteFilter *_noteFilter;
    NSNumber *_searchScope;
    NSNumber *_searchTime;
    NSString *_selectedNoteGUID;
    NSNumber *_selectTime;
    NSNumber *_noteRank;
    NSNumber *_noteCount;
}

@property (retain, nonatomic) NSString *userQuery;
@property (retain, nonatomic) EDAMNoteFilter *noteFilter;
@property (retain, nonatomic) NSNumber *searchScope;
@property (retain, nonatomic) NSNumber *searchTime;
@property (retain, nonatomic) NSString *selectedNoteGUID;
@property (retain, nonatomic) NSNumber *selectTime;
@property (retain, nonatomic) NSNumber *noteRank;
@property (retain, nonatomic) NSNumber *noteCount;

+ (id)structName;
+ (id)structFields;

@end
