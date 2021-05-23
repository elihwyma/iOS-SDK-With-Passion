/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

#import <Cards/Swift-Protocol.h>

@class NSDictionary, NSProgress, NSString;

@interface CRUpdateProgressCommand : NSObject <Swift>

{
    _Bool _animatesProgress;
    unsigned long long commandDirection;
    NSDictionary *userInfo;
    unsigned long long _event;
    NSProgress *_progress;
}

@property (nonatomic) unsigned long long event;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) _Bool animatesProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;

- (id)init;

@end
