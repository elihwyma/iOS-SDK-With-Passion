/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedDescriptor.h>

@class FCPrivateDataController;

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor

{
    FCPrivateDataController *_privateDataController;
}

@property (retain, nonatomic) FCPrivateDataController *privateDataController;

- (id)initWithIdentifier:(id)arg1;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (id)backingHeadlineIDs;
- (id)initWithPrivateDataController:(id)arg1 identifier:(id)arg2;

@end
