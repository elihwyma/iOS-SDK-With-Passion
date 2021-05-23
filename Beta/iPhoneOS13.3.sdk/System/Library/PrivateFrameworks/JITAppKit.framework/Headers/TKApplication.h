/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSString, NSURL, TKRepository;

@protocol TKApplicationDelegate;

@interface TKApplication : NSObject

{
    TKRepository *_repository;
    _Bool _ready;
    NSURL *_bundleURL;
    id <TKApplicationDelegate> _delegate;
    NSURL *_baseURL;
    NSString *_overrideCachesDirectoryPath;
}

@property (nonatomic, readonly) TKRepository *repository;
@property (copy, nonatomic) NSURL *baseURL;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (copy, nonatomic) NSString *overrideCachesDirectoryPath;
@property (nonatomic, readonly) _Bool ready;
@property (weak, nonatomic) id <TKApplicationDelegate> delegate;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shared;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)absoluteURL:(id)arg1;
- (id)loadPageWithDataRequest:(id)arg1;
- (id)loadPage:(id)arg1 withData:(id)arg2;
- (id)loadPage:(id)arg1 withDataRequest:(id)arg2;
- (id)loadView:(id)arg1;
- (Class)loadClass:(id)arg1;
- (id)loadPage:(id)arg1;
- (id)newErrorViewController:(id)arg1;
- (id)viewPathForName:(id)arg1;
- (void)loadBundle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)newLoadingViewController;
- (void)didLoadRepository:(id)arg1;
- (void)clearBundleCache;

@end
