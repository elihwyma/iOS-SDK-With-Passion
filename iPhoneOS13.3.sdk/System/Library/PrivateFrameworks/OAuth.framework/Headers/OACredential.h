//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OACredential : NSObject
{
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_oauthToken;
    NSString *_oauthTokenSecret;
}

@property(copy, nonatomic) NSString *oauthTokenSecret; // @synthesize oauthTokenSecret=_oauthTokenSecret;
@property(copy, nonatomic) NSString *oauthToken; // @synthesize oauthToken=_oauthToken;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
- (id)signingKey;
- (void)dealloc;

@end

