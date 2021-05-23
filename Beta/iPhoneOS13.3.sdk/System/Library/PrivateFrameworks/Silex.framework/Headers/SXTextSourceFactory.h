/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

@interface SXTextSourceFactory : NSObject

{
    id <SXSmartFieldFactory> _smartFieldFactory;
    id <SXDocumentLanguageProviding> _documentLanguageProvider;
    id <SXFontAttributesConstructor> _fontAttributesConstructor;
}

@property (nonatomic, readonly) id <SXSmartFieldFactory> smartFieldFactory;
@property (nonatomic, readonly) id <SXDocumentLanguageProviding> documentLanguageProvider;
@property (nonatomic, readonly) id <SXFontAttributesConstructor> fontAttributesConstructor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3;
- (id)createTextSourceWithString:(id)arg1 dataSource:(id)arg2;

@end
