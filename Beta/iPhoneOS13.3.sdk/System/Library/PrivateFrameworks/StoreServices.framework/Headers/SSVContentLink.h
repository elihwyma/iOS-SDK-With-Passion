/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSNumber, NSString, NSURL;

@interface SSVContentLink : NSObject

{
    NSString *_categoryName;
    long long _contentKind;
    NSNumber *_itemIdentifier;
    NSString *_itemTitle;
    NSString *_providerName;
    NSString *_searchTerm;
    long long _targetApplication;
}

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSNumber *itemIdentifier;
@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *searchTerm;
@property (nonatomic) long long contentKind;
@property (nonatomic) long long targetApplication;
@property (nonatomic, readonly) NSURL *URL;

- (long long)_targetApplicationWithContentKind:(long long)arg1;
- (id)_URLSchemeWithApplication:(long long)arg1;
- (id)_stringForContentKind:(long long)arg1;

@end
