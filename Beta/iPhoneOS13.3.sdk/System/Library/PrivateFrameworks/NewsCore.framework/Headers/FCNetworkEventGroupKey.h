/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCNetworkEventGroupKey : NSObject <Swift>

{
    long long _eventType;
    unsigned long long _sessionID;
    NSString *_respondingPOP;
}

@property (nonatomic) long long eventType;
@property (nonatomic) unsigned long long sessionID;
@property (retain, nonatomic) NSString *respondingPOP;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
