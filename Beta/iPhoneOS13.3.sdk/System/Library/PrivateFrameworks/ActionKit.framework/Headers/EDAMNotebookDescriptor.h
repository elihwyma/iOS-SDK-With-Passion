/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNotebookDescriptor : FATObject

{
    NSString *_guid;
    NSString *_notebookDisplayName;
    NSString *_contactName;
    NSNumber *_hasSharedNotebook;
    NSNumber *_joinedUserCount;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *notebookDisplayName;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSNumber *hasSharedNotebook;
@property (retain, nonatomic) NSNumber *joinedUserCount;

+ (id)structName;
+ (id)structFields;

@end
