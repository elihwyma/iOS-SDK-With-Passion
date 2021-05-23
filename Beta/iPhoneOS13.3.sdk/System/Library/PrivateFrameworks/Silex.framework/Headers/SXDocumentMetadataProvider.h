/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXMetaData;

@protocol SXAutoPlacement, SXDocumentProviding;

@interface SXDocumentMetadataProvider : NSObject

{
    id <SXDocumentProviding> _documentProvider;
}

@property (nonatomic, readonly) id <SXDocumentProviding> documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXMetaData *metadata;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) id <SXAutoPlacement> autoPlacement;

- (id)initWithDocumentProvider:(id)arg1;

@end
