/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSString;

@interface EDAMRelatedQuery : FATObject

{
    NSString *_noteGuid;
    NSString *_plainText;
    EDAMNoteFilter *_filter;
    NSString *_referenceUri;
    NSString *_context;
    NSString *_cacheKey;
}

@property (retain, nonatomic) NSString *noteGuid;
@property (retain, nonatomic) NSString *plainText;
@property (retain, nonatomic) EDAMNoteFilter *filter;
@property (retain, nonatomic) NSString *referenceUri;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *cacheKey;

+ (id)structName;
+ (id)structFields;

@end
