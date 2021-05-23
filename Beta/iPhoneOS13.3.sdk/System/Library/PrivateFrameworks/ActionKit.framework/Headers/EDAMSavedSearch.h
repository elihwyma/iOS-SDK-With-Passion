/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMSavedSearchScope, NSNumber, NSString;

@interface EDAMSavedSearch : FATObject

{
    NSString *_guid;
    NSString *_name;
    NSString *_query;
    NSNumber *_format;
    NSNumber *_updateSequenceNum;
    EDAMSavedSearchScope *_scope;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSNumber *format;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) EDAMSavedSearchScope *scope;

+ (id)structName;
+ (id)structFields;

@end
