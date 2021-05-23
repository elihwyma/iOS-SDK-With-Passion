/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnreadOnly : NSObject <Swift>

{
    FCReadingHistory *_history;
}

@property (retain, nonatomic) FCReadingHistory *history;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithReadingHistory:(id)arg1;

- (id)transformFeedItems:(id)arg1;

@end
