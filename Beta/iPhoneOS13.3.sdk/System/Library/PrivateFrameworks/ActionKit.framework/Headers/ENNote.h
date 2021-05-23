/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class EDAMNote, ENNoteContent, NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface ENNote : NSObject <Swift>

{
    NSMutableArray *_resources;
    _Bool _isReminder;
    NSString *_title;
    ENNoteContent *_content;
    NSArray *_tagNames;
    NSString *_sourceUrl;
    NSString *_cachedENMLContent;
    EDAMNote *_serviceNote;
    NSDictionary *_edamAttributes;
}

@property (copy, nonatomic, readonly) NSString *wfName;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *cachedENMLContent;
@property (retain, nonatomic) EDAMNote *serviceNote;
@property (retain, nonatomic) NSDictionary *edamAttributes;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) ENNoteContent *content;
@property (copy, nonatomic) NSArray *tagNames;
@property (nonatomic) _Bool isReminder;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSArray *resources;

- (id)init;
- (void)addResource:(id)arg1;
- (void)setResources:(id)arg1;
- (void)removeAllResources;
- (id)initWithServiceNote:(id)arg1;
- (void)generateWebArchiveData:(CDUnknownBlockType)arg1;
- (void)generateHTMLData:(CDUnknownBlockType)arg1;
- (void)invalidateCachedENML;
- (id)enmlContent;
- (id)EDAMNote;
- (id)EDAMNoteToReplaceServiceNoteGUID:(id)arg1;
- (_Bool)validateForLimits;
- (id)generateENMLContent;

@end
