/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXDocument;

@interface SXDocumentTextContentProvider : NSObject

{
    SXDocument *_document;
}

@property (nonatomic, readonly) SXDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedQueue;

- (id)initWithDocument:(id)arg1;
- (id)textContentForComponents:(id)arg1 withType:(unsigned long long)arg2;
- (id)textContentForComponent:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)classification:(id)arg1 isValidForType:(unsigned long long)arg2;
- (_Bool)contentRelevance:(unsigned long long)arg1 isValidForType:(unsigned long long)arg2;
- (void)textContentForType:(unsigned long long)arg1 onCompletion:(CDUnknownBlockType)arg2;

@end
