//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, REHTTPRequest;

@interface REHTTPResponse : NSObject
{
    REHTTPRequest *_request;
    struct __CFHTTPMessage _message;
    long long _statusCode;
}

@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
// - (void).cxx_destruct;
- (struct _CFHTTPServerResponse )response;
- (id)headerValueForKey:(id)arg1;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSData *body;
@property(readonly, copy, nonatomic) NSDictionary *headerFields;
@property(copy, nonatomic) NSDate *date;
- (id)_dateFormatter;
@property(copy, nonatomic) NSString *contentType;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 statusCode:(long long)arg2;

@end

