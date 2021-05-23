/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCFeedPersonalizing;

@interface FCFeedTransformationLowQualityContentFilter : NSObject <Swift>

{
    id <FCFeedPersonalizing> _feedPersonalizer;
}

@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)arg1;

- (id)transformFeedItems:(id)arg1;

@end
