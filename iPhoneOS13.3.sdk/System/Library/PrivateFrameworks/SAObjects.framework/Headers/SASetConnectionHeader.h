//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAConnectionPolicy;

@interface SASetConnectionHeader : SABaseClientBoundCommand
{
}

+ (id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setConnectionHeader;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL reconnectNow;
@property(retain, nonatomic) SAConnectionPolicy *connectionPolicy;
@property(copy, nonatomic) NSString *aceHostHeader;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

