/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SUViewControllerContext : NSObject

{
    NSMutableDictionary *_metadata;
    NSString *_sectionIdentifier;
    long long _type;
}

@property (retain, nonatomic) NSString *sectionIdentifier;
@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (id)valueForMetadataKey:(id)arg1;
- (id)copyViewController;
- (long long)_typeForTypeString:(id)arg1;
- (id)_typeStringForType:(long long)arg1;

@end
