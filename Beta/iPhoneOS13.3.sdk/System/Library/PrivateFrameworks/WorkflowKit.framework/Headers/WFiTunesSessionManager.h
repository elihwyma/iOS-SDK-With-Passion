/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSURL, NSURLSession;

@interface WFiTunesSessionManager : NSObject

{
    NSURLSession *_session;
    NSURL *_baseURL;
}

@property (copy, nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURLSession *session;

- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)searchForMediaOfType:(id)arg1 limitedToEntityType:(id)arg2 withTerm:(id)arg3 forAttribute:(id)arg4 countryCode:(id)arg5 limit:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)lookupMediaWithIdentifiers:(id)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupMediaWithBundleIdentifier:(id)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupMediaWithUPC:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lookupMediaWithISBN:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMediaWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
