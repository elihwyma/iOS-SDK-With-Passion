//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, TSKDocumentRoot;
@protocol TSCEReferenceResolving, TSCEResolverContainer;

@protocol TSCEResolverLocatingProtocol <NSObject>
- (id <TSCEReferenceResolving>)resolverMatchingNameWithContextContainer:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextContainerName:(NSString *)arg3;
- (id <TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextResolver:(id <TSCEReferenceResolving>)arg3;
- (id <TSCEResolverContainer>)resolverContainerMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2;
@end

