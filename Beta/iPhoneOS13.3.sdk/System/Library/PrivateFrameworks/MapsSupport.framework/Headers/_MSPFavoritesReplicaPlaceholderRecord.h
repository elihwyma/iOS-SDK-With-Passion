/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPPosition, MSPVectorTimestamp, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _MSPFavoritesReplicaPlaceholderRecord : NSObject

{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *contents;
@property (copy, nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;
@property (nonatomic, readonly) MSPPosition *position;
@property (nonatomic, readonly) MSPVectorTimestamp *positionTimestamp;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4;

@end
