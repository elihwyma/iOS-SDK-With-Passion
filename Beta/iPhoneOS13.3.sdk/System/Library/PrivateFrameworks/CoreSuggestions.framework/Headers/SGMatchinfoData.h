/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber;

@interface SGMatchinfoData : NSObject

{
    NSNumber *_entityId;
    NSNumber *_detailEntityId;
    NSData *_matchinfoData;
}

@property (nonatomic, readonly) NSNumber *entityId;
@property (nonatomic, readonly) NSNumber *detailEntityId;
@property (nonatomic, readonly) NSData *matchinfoData;

+ (id)matchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3;
- (_Bool)isEqualToMatchinfoData:(id)arg1;

@end
