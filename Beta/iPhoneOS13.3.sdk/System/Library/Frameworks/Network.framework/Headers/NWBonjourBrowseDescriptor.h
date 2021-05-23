/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWBrowseDescriptor.h>

@class NSString;

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *domain;

+ (unsigned int)descriptorType;
+ (id)descriptorWithType:(id)arg1 domain:(id)arg2;

- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;

@end
