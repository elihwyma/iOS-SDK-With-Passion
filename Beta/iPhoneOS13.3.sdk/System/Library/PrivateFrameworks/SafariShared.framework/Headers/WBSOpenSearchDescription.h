/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, WBSOpenSearchURLTemplate;

@interface WBSOpenSearchDescription : NSObject

{
    NSString *_descriptionDocumentURLString;
    WBSOpenSearchURLTemplate *_searchURLTemplate;
    WBSOpenSearchURLTemplate *_urlTemplateForSuggestionsInJSON;
    WBSOpenSearchURLTemplate *_urlTemplateForSuggestionsInXML;
}

@property (nonatomic, readonly) NSString *descriptionDocumentURLString;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInXML;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDescriptionDocumentURLString:(id)arg1 searchURLTemplate:(id)arg2 urlTemplateForSuggestionsInJSON:(id)arg3 urlTemplateForSuggestionsInXML:(id)arg4;

@end
