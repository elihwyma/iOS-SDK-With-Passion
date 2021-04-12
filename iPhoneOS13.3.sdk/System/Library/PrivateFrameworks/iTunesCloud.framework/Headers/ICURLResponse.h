//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSURL, NSURLRequest, NSURLResponse;

@interface ICURLResponse : NSObject
{
    long long _parsedBodyResponseType;
    id _parsedBodyResponse;
    NSURLRequest *_urlRequest;
    NSURLResponse *_urlResponse;
    NSData *_bodyData;
    NSURL *_bodyDataURL;
}

@property(readonly, nonatomic) NSURL *bodyDataURL; // @synthesize bodyDataURL=_bodyDataURL;
@property(readonly, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, nonatomic) NSURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(readonly, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
// - (void).cxx_destruct;
- (void)_prepareParsedBodyResponse;
- (id)parsedBody;
- (id)parsedBodyDictionary;
- (id)parsedBodyArray;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3;
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3;

@end

