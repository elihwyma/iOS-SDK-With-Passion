//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIImageDataConsumer : SSVURLDataConsumer
{
}

- (id)objectForData:(id)arg1 response:(id)arg2 error:(id )arg3;
@property(readonly, nonatomic, getter=isImagePlaceholderAvailable) BOOL imagePlaceholderAvailable;
- (id)imagePlaceholderForColor:(id)arg1;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 size:(CGSize)arg2;
- (id)imageForColor:(id)arg1;

@end

