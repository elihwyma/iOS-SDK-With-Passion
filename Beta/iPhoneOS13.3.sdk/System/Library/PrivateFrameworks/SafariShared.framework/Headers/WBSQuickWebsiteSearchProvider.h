/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, WBSOpenSearchDescription, WBSOpenSearchURLTemplate;

@protocol WBSQuickWebsiteSearchProviderDelegate;

@interface WBSQuickWebsiteSearchProvider : NSObject

{
    id <WBSQuickWebsiteSearchProviderDelegate> _delegate;
    NSString *_displayName;
    NSString *_hostname;
    NSString *_sourcePageURLString;
    NSDate *_dateAdded;
    WBSOpenSearchURLTemplate *_searchURLTemplateFromForm;
    NSString *_openSearchDescriptionURLString;
    NSDate *_dateOfLastSearch;
}

@property (nonatomic, readonly) NSString *sourcePageURLString;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (retain, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplateFromForm;
@property (copy, nonatomic) NSString *openSearchDescriptionURLString;
@property (copy, nonatomic) NSDate *dateOfLastSearch;
@property (nonatomic, readonly) WBSOpenSearchDescription *openSearchDescription;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *hostname;

- (id)dictionaryRepresentation;
- (id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2 delegate:(id)arg3;
- (id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 delegate:(id)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1 delegate:(id)arg2;

@end
