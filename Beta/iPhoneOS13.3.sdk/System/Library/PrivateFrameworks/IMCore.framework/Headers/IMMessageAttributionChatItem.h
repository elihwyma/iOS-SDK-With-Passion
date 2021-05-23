/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMMessageStatusChatItem.h>

@class NSDictionary, NSString;

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem

{
    _Bool _showsLearnMoreLink;
    NSDictionary *_attributionInfo;
    long long _attributionType;
}

@property (copy, nonatomic, readonly) NSDictionary *attributionInfo;
@property (nonatomic, readonly) long long attributionType;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) _Bool showsLearnMoreLink;

- (id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3 showsLearnMoreLink:(_Bool)arg4;

@end
