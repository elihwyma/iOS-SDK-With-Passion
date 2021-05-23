/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDocumentProviding;

@interface SXDOMFactory : NSObject

{
    id <SXDocumentProviding> _documentProvider;
}

@property (nonatomic, readonly) id <SXDocumentProviding> documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDocumentProvider:(id)arg1;
- (id)createDOM;

@end
