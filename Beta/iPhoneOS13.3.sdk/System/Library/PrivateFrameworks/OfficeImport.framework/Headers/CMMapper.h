/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CMArchiveManager, NSString, OCDDocument;

__attribute__((visibility("hidden")))
@interface CMMapper : NSObject

{
    CMMapper *mParent;
    CMMapper *mRoot;
    OCDDocument *_document;
    CMArchiveManager *mArchiver;
    NSString *_fileName;
}

@property (weak, readonly) CMMapper *parent;
@property (retain) NSString *fileName;
@property (readonly) OCDDocument *document;

- (id)init;
- (id)initWithParent:(id)arg1;
- (id)root;
- (id)archiver;
- (void)addAttribute:(id)arg1 toNode:(id)arg2 value:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2;
- (void)mapWithState:(id)arg1;
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 embedStyle:(_Bool)arg3;
- (void)addStyle:(id)arg1 withName:(id)arg2;
- (void)mapStylesheetAt:(id)arg1 stylesheet:(id)arg2;
- (void)startMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;
- (void)finishMappingWithState:(id)arg1;

@end
