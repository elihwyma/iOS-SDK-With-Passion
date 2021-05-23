/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

@interface SXDataTableTextSourceFactory : NSObject

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

- (id)textSourceWithFormattedText:(id)arg1 indexPath:(CDStruct_2fea82da)arg2 dataSource:(id)arg3;
- (id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3;

@end
