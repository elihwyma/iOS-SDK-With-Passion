/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, PGGraphMomentNode, PHAsset;

@interface PGSharingRecord : NSObject

{
    unsigned long long _type;
    NSDate *_date;
    NSArray *_persons;
    PGGraphMomentNode *_momentNode;
    NSString *_momentLocalIdentifier;
    PHAsset *_asset;
    NSString *_assetLocalIdentifier;
}

@property (nonatomic, readonly) NSString *momentLocalIdentifier;
@property (nonatomic, readonly) NSString *assetLocalIdentifier;
@property (retain, nonatomic) PGGraphMomentNode *momentNode;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSArray *persons;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentLocalIdentifier:(id)arg4 assetLocalIdentifier:(id)arg5;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentNode:(id)arg4 asset:(id)arg5;
- (void)prepareForPersistence;

@end
