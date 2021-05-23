/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate, NSNumber, NSString, SSItemImageCollection;

@interface SSPreorder : NSObject

{
    NSNumber *_accountID;
    NSString *_artistName;
    SSItemImageCollection *_imageCollection;
    unsigned long long _itemID;
    NSString *_itemKind;
    double _releaseDate;
    NSString *_releaseDateString;
    long long _pid;
    unsigned long long _preorderID;
    NSString *_title;
}

@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) SSItemImageCollection *imageCollection;
@property (nonatomic, readonly) NSString *itemKind;
@property (nonatomic, readonly) long long persistentIdentifier;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) NSString *releaseDateString;
@property (nonatomic, readonly) NSNumber *storeAccountIdentifier;
@property (nonatomic, readonly) unsigned long long storeItemIdentifier;
@property (nonatomic, readonly) unsigned long long storePreorderIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)_setTitle:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)_initWithPersistentIdentifier:(long long)arg1;
- (id)copyReleaseDateStringWithStyle:(long long)arg1;
- (void)_setArtistName:(id)arg1;
- (void)_setImageCollection:(id)arg1;
- (void)_setItemKind:(id)arg1;
- (void)_setReleaseDate:(id)arg1;
- (void)_setReleaseDateString:(id)arg1;
- (void)_setStoreAccountIdentifier:(id)arg1;
- (void)_setStoreItemIdentifier:(long long)arg1;
- (void)_setStorePreorderIdentifier:(long long)arg1;

@end
