//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRemoteRequestOperation.h>


@class ICClientInfo, NSString;

@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding>
{
    ICClientInfo *_clientInfo;
    NSString *_developerToken;
    NSUInteger _options;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)_executeByPerformingStoreRequestWithContext:(id)arg1;
- (void)execute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performRequestWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithDeveloperToken:(id)arg1 clientInfo:(id)arg2 options:(NSUInteger)arg3;

@end
