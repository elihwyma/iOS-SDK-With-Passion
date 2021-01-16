//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityKind : NSObject <NSCopying>
{
    NSString *_mediaEntityClassName;
    NSArray *_propertyDescriptors;
    NSDictionary *_propertyDescriptorsByName;
}

@property(copy, nonatomic) NSDictionary *propertyDescriptorsByName; // @synthesize propertyDescriptorsByName=_propertyDescriptorsByName;
@property(copy, nonatomic) NSArray *propertyDescriptors; // @synthesize propertyDescriptors=_propertyDescriptors;
@property(readonly, copy, nonatomic) NSString *mediaEntityClassName; // @synthesize mediaEntityClassName=_mediaEntityClassName;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)sortingPropertyDescriptorForName:(id)arg1;
- (id)propertyDescriptorForName:(id)arg1;
- (id)initWithMediaEntityClassName:(id)arg1;
- (id)init;

@end
