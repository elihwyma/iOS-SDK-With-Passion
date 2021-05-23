/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol NSCopying;

@interface UIWKDocumentRequest : NSObject

{
    id <NSCopying> _inputElementIdentifier;
    long long _flags;
    long long _surroundingGranularity;
    long long _granularityCount;
    struct CGRect _documentRect;
}

@property (nonatomic) long long flags;
@property (nonatomic) long long surroundingGranularity;
@property (nonatomic) long long granularityCount;
@property (nonatomic) struct CGRect documentRect;
@property (retain, nonatomic) id <NSCopying> inputElementIdentifier;

- (void)dealloc;

@end
